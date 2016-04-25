<?php
/**
 * @file
 * cesfur_feature_migration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cesfur_feature_migration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cesfur_feature_migration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cesfur_feature_migration_node_info() {
  $items = array(
    'anti_cliente' => array(
      'name' => t('Anti-cliente'),
      'base' => 'node_content',
      'description' => t('Anticlientes.'),
      'has_title' => '1',
      'title_label' => t('Anti-Cliente'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Artículo'),
      'base' => 'node_content',
      'description' => t('Utilice <em>artículos</em> para contenido que dependa de fecha y hora, como ser noticias, artículos de prensa o entradas de blogs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'empresa_financiera' => array(
      'name' => t('Empresa Financiera'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido para una empresa financiera (sólo podrá crearla el usuario de tipo CESFUR)'),
      'has_title' => '1',
      'title_label' => t('Nombre de empresa financiera'),
      'help' => '',
    ),
    'nube_documento' => array(
      'name' => t('NUBE Documento'),
      'base' => 'node_content',
      'description' => t('Documento para la NUBE de documentos.'),
      'has_title' => '1',
      'title_label' => t('NUBE Documento'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Página básica'),
      'base' => 'node_content',
      'description' => t('Utilice <em>páginas básicas</em> para contenido estático, como una página "Acerca de...".'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
