<?php
/**
 * @file
 * cesfur_feature_migration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cesfur_feature_migration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'anticlientes_excel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Anticlientes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista de anticlientes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nombre_anticliente' => 'field_nombre_anticliente',
    'field_apellido_anticliente' => 'field_apellido_anticliente',
    'field_cedula_anticliente' => 'field_cedula_anticliente',
    'field_fecha_del_evento_anticlien' => 'field_fecha_del_evento_anticlien',
    'field_descripcion_evento_anticli' => 'field_descripcion_evento_anticli',
    'field_mas_detalles_ev_anticlient' => 'field_mas_detalles_ev_anticlient',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nombre_anticliente' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apellido_anticliente' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cedula_anticliente' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fecha_del_evento_anticlien' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_descripcion_evento_anticli' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mas_detalles_ev_anticlient' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Mostrando @current_page de @page_count';
  /* Pie de página: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Mostrando pagina @current_page de @total';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No hay resultados.';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aún no hay cargado ningún anti-cliente. Cargue uno nuevo haciendo click <a href=\'/crear/anti-cliente\'>aquí</a>';
  $handler->display->display_options['empty']['area']['format'] = 'texto_con_formato';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenido: Nombre */
  $handler->display->display_options['fields']['field_nombre_anticliente']['id'] = 'field_nombre_anticliente';
  $handler->display->display_options['fields']['field_nombre_anticliente']['table'] = 'field_data_field_nombre_anticliente';
  $handler->display->display_options['fields']['field_nombre_anticliente']['field'] = 'field_nombre_anticliente';
  $handler->display->display_options['fields']['field_nombre_anticliente']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Apellido */
  $handler->display->display_options['fields']['field_apellido_anticliente']['id'] = 'field_apellido_anticliente';
  $handler->display->display_options['fields']['field_apellido_anticliente']['table'] = 'field_data_field_apellido_anticliente';
  $handler->display->display_options['fields']['field_apellido_anticliente']['field'] = 'field_apellido_anticliente';
  $handler->display->display_options['fields']['field_apellido_anticliente']['alter']['text'] = '<b>Apellido del anticliente:</b> <i>[field_apellido_anticliente]</i>';
  $handler->display->display_options['fields']['field_apellido_anticliente']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Cédula */
  $handler->display->display_options['fields']['field_cedula_anticliente']['id'] = 'field_cedula_anticliente';
  $handler->display->display_options['fields']['field_cedula_anticliente']['table'] = 'field_data_field_cedula_anticliente';
  $handler->display->display_options['fields']['field_cedula_anticliente']['field'] = 'field_cedula_anticliente';
  $handler->display->display_options['fields']['field_cedula_anticliente']['label'] = 'Cedula';
  $handler->display->display_options['fields']['field_cedula_anticliente']['alter']['text'] = '<b>Cédula: </b><i>[field_cedula_anticliente]</i>';
  $handler->display->display_options['fields']['field_cedula_anticliente']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Fecha del evento */
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['id'] = 'field_fecha_del_evento_anticlien';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['table'] = 'field_data_field_fecha_del_evento_anticlien';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['field'] = 'field_fecha_del_evento_anticlien';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['alter']['text'] = '<b>Fecha del evento: </b><i>[field_fecha_del_evento_anticlien]</i>';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Contenido: Descripcion evento */
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['id'] = 'field_descripcion_evento_anticli';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['table'] = 'field_data_field_descripcion_evento_anticli';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['field'] = 'field_descripcion_evento_anticli';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['label'] = 'Descripcion';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['text'] = '<b>Descripción:</b> <i>[field_descripcion_evento_anticli]</i>';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['preserve_tags'] = '<i> <b>';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Contenido: Mas detalles */
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['id'] = 'field_mas_detalles_ev_anticlient';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['table'] = 'field_data_field_mas_detalles_ev_anticlient';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['field'] = 'field_mas_detalles_ev_anticlient';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['preserve_tags'] = '<i> <b>';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autor';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div style="text-align: center; width: 100%;"><h5>Creado por [name]</h5></div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anti_cliente' => 'anti_cliente',
  );
  /* Filter criterion: Contenido: Nombre (field_nombre_anticliente) */
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['id'] = 'field_nombre_anticliente_value';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['table'] = 'field_data_field_nombre_anticliente';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['field'] = 'field_nombre_anticliente_value';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['expose']['operator_id'] = 'field_nombre_anticliente_value_op';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['expose']['label'] = 'Nombre anticliente';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['expose']['operator'] = 'field_nombre_anticliente_value_op';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['expose']['identifier'] = 'field_nombre_anticliente_value';
  $handler->display->display_options['filters']['field_nombre_anticliente_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Anticlientes */
  $handler = $view->new_display('page', 'Anticlientes', 'page');
  $handler->display->display_options['path'] = 'ver/anticlientes';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'ver/anticlientes/anticlientes.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['anticlientes_excel'] = array(
    t('Master'),
    t('Lista de anticlientes'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Mostrando @current_page de @page_count'),
    t('Mostrando pagina @current_page de @total'),
    t('No hay resultados.'),
    t('Aún no hay cargado ningún anti-cliente. Cargue uno nuevo haciendo click <a href=\'/crear/anti-cliente\'>aquí</a>'),
    t('author'),
    t('Titulo'),
    t('Nombre'),
    t('Apellido'),
    t('<b>Apellido del anticliente:</b> <i>[field_apellido_anticliente]</i>'),
    t('Cedula'),
    t('<b>Cédula: </b><i>[field_cedula_anticliente]</i>'),
    t('Fecha del evento'),
    t('<b>Fecha del evento: </b><i>[field_fecha_del_evento_anticlien]</i>'),
    t('Descripcion'),
    t('<b>Descripción:</b> <i>[field_descripcion_evento_anticli]</i>'),
    t('Mas detalles'),
    t('Autor'),
    t('<div style="text-align: center; width: 100%;"><h5>Creado por [name]</h5></div>'),
    t('Nombre anticliente'),
    t('Anticlientes'),
    t('Data export'),
  );
  $export['anticlientes_excel'] = $view;

  $view = new view();
  $view->name = 'clone_of_anticlientes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Anticlientes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista de anticlientes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row-anticliente';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Encabezado: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Mostrando @current_page de @page_count';
  /* Pie de página: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Mostrando pagina @current_page de @total';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No hay resultados.';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aún no hay cargado ningún anti-cliente. Cargue uno nuevo haciendo click <a href=\'/crear/anti-cliente\'>aquí</a>';
  $handler->display->display_options['empty']['area']['format'] = 'texto_con_formato';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenido: Nombre */
  $handler->display->display_options['fields']['field_nombre_anticliente']['id'] = 'field_nombre_anticliente';
  $handler->display->display_options['fields']['field_nombre_anticliente']['table'] = 'field_data_field_nombre_anticliente';
  $handler->display->display_options['fields']['field_nombre_anticliente']['field'] = 'field_nombre_anticliente';
  $handler->display->display_options['fields']['field_nombre_anticliente']['label'] = '';
  $handler->display->display_options['fields']['field_nombre_anticliente']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nombre_anticliente']['alter']['text'] = '<b>Nombre del anticliente:</b> <i>[field_nombre_anticliente]</i>';
  $handler->display->display_options['fields']['field_nombre_anticliente']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Apellido */
  $handler->display->display_options['fields']['field_apellido_anticliente']['id'] = 'field_apellido_anticliente';
  $handler->display->display_options['fields']['field_apellido_anticliente']['table'] = 'field_data_field_apellido_anticliente';
  $handler->display->display_options['fields']['field_apellido_anticliente']['field'] = 'field_apellido_anticliente';
  $handler->display->display_options['fields']['field_apellido_anticliente']['label'] = '';
  $handler->display->display_options['fields']['field_apellido_anticliente']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apellido_anticliente']['alter']['text'] = '<b>Apellido del anticliente:</b> <i>[field_apellido_anticliente]</i>';
  $handler->display->display_options['fields']['field_apellido_anticliente']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Cédula */
  $handler->display->display_options['fields']['field_cedula_anticliente']['id'] = 'field_cedula_anticliente';
  $handler->display->display_options['fields']['field_cedula_anticliente']['table'] = 'field_data_field_cedula_anticliente';
  $handler->display->display_options['fields']['field_cedula_anticliente']['field'] = 'field_cedula_anticliente';
  $handler->display->display_options['fields']['field_cedula_anticliente']['label'] = '';
  $handler->display->display_options['fields']['field_cedula_anticliente']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cedula_anticliente']['alter']['text'] = '<b>Cédula: </b><i>[field_cedula_anticliente]</i>';
  $handler->display->display_options['fields']['field_cedula_anticliente']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Fecha del evento */
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['id'] = 'field_fecha_del_evento_anticlien';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['table'] = 'field_data_field_fecha_del_evento_anticlien';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['field'] = 'field_fecha_del_evento_anticlien';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['alter']['text'] = '<b>Fecha del evento: </b><i>[field_fecha_del_evento_anticlien]</i>';
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_del_evento_anticlien']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Contenido: Descripcion evento */
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['id'] = 'field_descripcion_evento_anticli';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['table'] = 'field_data_field_descripcion_evento_anticli';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['field'] = 'field_descripcion_evento_anticli';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['label'] = '';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['text'] = '<b>Descripción:</b> <i>[field_descripcion_evento_anticli]</i>';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['alter']['preserve_tags'] = '<i> <b>';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_descripcion_evento_anticli']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Contenido: Mas detalles */
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['id'] = 'field_mas_detalles_ev_anticlient';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['table'] = 'field_data_field_mas_detalles_ev_anticlient';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['field'] = 'field_mas_detalles_ev_anticlient';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['label'] = '';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['text'] = '<b>Mas detalles:</b> <i>[field_mas_detalles_ev_anticlient]</i>';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['alter']['preserve_tags'] = '<i> <b>';
  $handler->display->display_options['fields']['field_mas_detalles_ev_anticlient']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div style="text-align: center; width: 100%;"><h5>Creado por [name]</h5></div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anti_cliente' => 'anti_cliente',
  );

  /* Display: Anticlientes */
  $handler = $view->new_display('page', 'Anticlientes', 'page');
  $handler->display->display_options['path'] = 'ver/anticlientes';
  $translatables['clone_of_anticlientes'] = array(
    t('Master'),
    t('Lista de anticlientes'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Mostrando @current_page de @page_count'),
    t('Mostrando pagina @current_page de @total'),
    t('No hay resultados.'),
    t('Aún no hay cargado ningún anti-cliente. Cargue uno nuevo haciendo click <a href=\'/crear/anti-cliente\'>aquí</a>'),
    t('author'),
    t('<h3>[title]</h3>'),
    t('<b>Nombre del anticliente:</b> <i>[field_nombre_anticliente]</i>'),
    t('<b>Apellido del anticliente:</b> <i>[field_apellido_anticliente]</i>'),
    t('<b>Cédula: </b><i>[field_cedula_anticliente]</i>'),
    t('<b>Fecha del evento: </b><i>[field_fecha_del_evento_anticlien]</i>'),
    t('<b>Descripción:</b> <i>[field_descripcion_evento_anticli]</i>'),
    t('<b>Mas detalles:</b> <i>[field_mas_detalles_ev_anticlient]</i>'),
    t('<div style="text-align: center; width: 100%;"><h5>Creado por [name]</h5></div>'),
    t('Anticlientes'),
  );
  $export['clone_of_anticlientes'] = $view;

  $view = new view();
  $view->name = 'documentos_en_la_nube';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documentos en la nube';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documentos en la nube';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_categoria_documento' => 'field_categoria_documento',
    'body' => 'body',
    'field_documento_nube_archivo' => 'field_documento_nube_archivo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_categoria_documento' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_documento_nube_archivo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aún no hay cargado ningún documento en la nube. Cargue uno nuevo haciendo click <a href=\'/crear/nube-documento\'>aquí</a>';
  $handler->display->display_options['empty']['area']['format'] = 'texto_con_formato';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Categoria documento */
  $handler->display->display_options['fields']['field_categoria_documento']['id'] = 'field_categoria_documento';
  $handler->display->display_options['fields']['field_categoria_documento']['table'] = 'field_data_field_categoria_documento';
  $handler->display->display_options['fields']['field_categoria_documento']['field'] = 'field_categoria_documento';
  $handler->display->display_options['fields']['field_categoria_documento']['label'] = 'Categoria';
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Descripción';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Contenido: Archivo */
  $handler->display->display_options['fields']['field_documento_nube_archivo']['id'] = 'field_documento_nube_archivo';
  $handler->display->display_options['fields']['field_documento_nube_archivo']['table'] = 'field_data_field_documento_nube_archivo';
  $handler->display->display_options['fields']['field_documento_nube_archivo']['field'] = 'field_documento_nube_archivo';
  $handler->display->display_options['fields']['field_documento_nube_archivo']['label'] = 'Archivo adjunto';
  $handler->display->display_options['fields']['field_documento_nube_archivo']['click_sort_column'] = 'fid';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nube_documento' => 'nube_documento',
  );
  /* Filter criterion: Contenido: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ver/documentos_nube';
  $translatables['documentos_en_la_nube'] = array(
    t('Master'),
    t('Documentos en la nube'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Aún no hay cargado ningún documento en la nube. Cargue uno nuevo haciendo click <a href=\'/crear/nube-documento\'>aquí</a>'),
    t('author'),
    t('Titulo'),
    t('Categoria'),
    t('Descripción'),
    t('Archivo adjunto'),
    t('Page'),
  );
  $export['documentos_en_la_nube'] = $view;

  $view = new view();
  $view->name = 'mis_empresas_financieras';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mis empresas financieras';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mis empresas financieras';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'ver empresas financieras';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Sin resultados';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aún no ha creado una empresa financiera. Cree una haciendo click <a href=\'/crear/empresa-financiera\'>aquí</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_usuario_empresa_financiera_target_id']['id'] = 'field_usuario_empresa_financiera_target_id';
  $handler->display->display_options['relationships']['field_usuario_empresa_financiera_target_id']['table'] = 'field_data_field_usuario_empresa_financiera';
  $handler->display->display_options['relationships']['field_usuario_empresa_financiera_target_id']['field'] = 'field_usuario_empresa_financiera_target_id';
  $handler->display->display_options['relationships']['field_usuario_empresa_financiera_target_id']['label'] = 'field_usuario_empresa_financiera';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
  );
  /* Campo: Contenido: Encargado de la empresa */
  $handler->display->display_options['fields']['field_usuario_empresa_financiera']['id'] = 'field_usuario_empresa_financiera';
  $handler->display->display_options['fields']['field_usuario_empresa_financiera']['table'] = 'field_data_field_usuario_empresa_financiera';
  $handler->display->display_options['fields']['field_usuario_empresa_financiera']['field'] = 'field_usuario_empresa_financiera';
  $handler->display->display_options['fields']['field_usuario_empresa_financiera']['label'] = 'Usuario encargado';
  $handler->display->display_options['fields']['field_usuario_empresa_financiera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_usuario_empresa_financiera']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'empresa_financiera' => 'empresa_financiera',
  );
  /* Filter criterion: Usuario: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_usuario_empresa_financiera_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Administrador empresa';
  $handler->display->display_options['filters']['name']['expose']['operator_label'] = 'Cond.';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['name']['group_info']['label'] = 'Name (raw)';
  $handler->display->display_options['filters']['name']['group_info']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['name']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mis-empresas-financieras';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mis empresas financieras';
  $handler->display->display_options['menu']['name'] = 'menu-cesfur-menu';
  $translatables['mis_empresas_financieras'] = array(
    t('Master'),
    t('Mis empresas financieras'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Sin resultados'),
    t('Aún no ha creado una empresa financiera. Cree una haciendo click <a href=\'/crear/empresa-financiera\'>aquí</a>'),
    t('author'),
    t('field_usuario_empresa_financiera'),
    t('Usuario encargado'),
    t('Administrador empresa'),
    t('Cond.'),
    t('Name (raw)'),
    t('Page'),
  );
  $export['mis_empresas_financieras'] = $view;

  $view = new view();
  $view->name = 'revisioning_content_revisions_summary';
  $view->description = 'A list of individual content revisions, filtered by state.';
  $view->tag = 'Revisioning';
  $view->base_table = 'node_revision';
  $view->human_name = 'Revisiones por nodo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tabla de revisiones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'vid' => 'vid',
    'title' => 'title',
    'timestamp' => 'timestamp',
    'state' => 'state',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'vid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h4>No hay resultados con esos filtros</h4>';
  $handler->display->display_options['empty']['area']['format'] = 'texto_con_formato';
  /* Relationship: Content revision: Contenido */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Content revision: Usuario */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Content revision: Vid */
  $handler->display->display_options['fields']['vid_1']['id'] = 'vid_1';
  $handler->display->display_options['fields']['vid_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['vid_1']['field'] = 'vid';
  $handler->display->display_options['fields']['vid_1']['label'] = '';
  $handler->display->display_options['fields']['vid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid_1']['element_label_colon'] = FALSE;
  /* Campo: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autor';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Campo: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '#';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'counter';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[counter] (Revision actual)';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[counter]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Campo: Content revision: Vid */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = 'ID de Revisión';
  /* Campo: Content revision: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/revisions/[vid]/view';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Content revision: Log message */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['fields']['log']['label'] = 'Mensaje';
  $handler->display->display_options['fields']['log']['empty'] = '-';
  /* Campo: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Fecha de actualización';
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['timezone'] = 'America/Montevideo';
  /* Campo: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['views_conditional_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'type';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'NUBE Documento';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[name]';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = '-';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Contextual filter: Content revision: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content revision: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node_revision';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/revisiones';
  $translatables['revisioning_content_revisions_summary'] = array(
    t('Master'),
    t('Tabla de revisiones'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<h4>No hay resultados con esos filtros</h4>'),
    t('Get the actual content from a content revision.'),
    t('revision user'),
    t('#'),
    t('Autor'),
    t('Tipo'),
    t('ID de Revisión'),
    t('Título'),
    t('[title]'),
    t('Mensaje'),
    t('-'),
    t('Fecha de actualización'),
    t('Todo'),
    t('Page'),
  );
  $export['revisioning_content_revisions_summary'] = $view;

  $view = new view();
  $view->name = 'view_revision';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'View revision';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View revision';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content revision: Contenido */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Content revision: Contenido */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Campo: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
  /* Campo: Content revision: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/revisiones/%';
  $translatables['view_revision'] = array(
    t('Master'),
    t('View revision'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Get the actual content from a content revision.'),
    t('Updated date'),
    t('Todo'),
    t('Page'),
  );
  $export['view_revision'] = $view;

  return $export;
}
