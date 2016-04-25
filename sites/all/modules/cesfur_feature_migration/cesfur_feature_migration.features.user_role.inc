<?php
/**
 * @file
 * cesfur_feature_migration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cesfur_feature_migration_user_default_roles() {
  $roles = array();

  // Exported role: Administrador.
  $roles['Administrador'] = array(
    'name' => 'Administrador',
    'weight' => 2,
  );

  // Exported role: Administrador de Empresa Financiera.
  $roles['Administrador de Empresa Financiera'] = array(
    'name' => 'Administrador de Empresa Financiera',
    'weight' => 4,
  );

  // Exported role: CESFUR.
  $roles['CESFUR'] = array(
    'name' => 'CESFUR',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 5,
  );

  // Exported role: Testing.
  $roles['Testing'] = array(
    'name' => 'Testing',
    'weight' => 6,
  );

  return $roles;
}
