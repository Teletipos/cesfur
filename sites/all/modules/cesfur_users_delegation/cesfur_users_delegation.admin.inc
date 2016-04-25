<?php

function cesfur_users_delegation_admin_form() {
  
    /** if (!user_access('administer permissions')) {
      return NULL;
    } **/

    // Get all available roles except for 'anonymous user'
    // and 'authenticated user'.
    $roles = user_roles(TRUE);
    unset($roles[DRUPAL_AUTHENTICATED_RID]);

    if(count($roles) == 0) {
      $form['roleassign_roles'] = array(
        '#type' => 'markup',
        '#value' => '<p>No assignable roles available. You have to ' . l(t('create roles'), 'admin/people/permissions/roles') . ' that can be assigned.</p>',
      );
    } else {
      foreach($roles as $key => $role) {
        $idFieldset = 'rol_delegation_' . $key;
        $subFieldset = 'rol_subset_delegation_' . $key;

        $arrRolesAux = $roles;
        unset($arrRolesAux[$key]);

        $form[$idFieldset] = array(
          '#type' => 'fieldset',
          '#title' => $role,
          '#collapsible' => TRUE, // Added
          '#collapsed' => TRUE,  // Added
        );

        $form[$idFieldset][$subFieldset] = array(
          '#type' => 'checkboxes',
          '#title' => t('Roles'),
          '#options' => $arrRolesAux,
          '#default_value' => variable_get($subFieldset,  array()),
          '#description' => t("Select roles that current user's role can create/view"),
        );
      }
    }

    return system_settings_form($form);
}