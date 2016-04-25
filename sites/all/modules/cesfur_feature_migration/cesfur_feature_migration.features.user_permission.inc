<?php
/**
 * @file
 * cesfur_feature_migration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cesfur_feature_migration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrador' => 'Administrador',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer css injection'.
  $permissions['administer css injection'] = array(
    'name' => 'administer css injection',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'css_injector',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer front page'.
  $permissions['administer front page'] = array(
    'name' => 'administer front page',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'front_page',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer twilio'.
  $permissions['administer twilio'] = array(
    'name' => 'administer twilio',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'twilio',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrador' => 'Administrador',
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear countries_feed feeds'.
  $permissions['clear countries_feed feeds'] = array(
    'name' => 'clear countries_feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user feeds'.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create anti_cliente content'.
  $permissions['create anti_cliente content'] = array(
    'name' => 'create anti_cliente content',
    'roles' => array(
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create empresa_financiera content'.
  $permissions['create empresa_financiera content'] = array(
    'name' => 'create empresa_financiera content',
    'roles' => array(
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nube_documento content'.
  $permissions['create nube_documento content'] = array(
    'name' => 'create nube_documento content',
    'roles' => array(
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'CESFUR' => 'CESFUR',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any anti_cliente content'.
  $permissions['delete any anti_cliente content'] = array(
    'name' => 'delete any anti_cliente content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any empresa_financiera content'.
  $permissions['delete any empresa_financiera content'] = array(
    'name' => 'delete any empresa_financiera content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nube_documento content'.
  $permissions['delete any nube_documento content'] = array(
    'name' => 'delete any nube_documento content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own anti_cliente content'.
  $permissions['delete own anti_cliente content'] = array(
    'name' => 'delete own anti_cliente content',
    'roles' => array(
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own empresa_financiera content'.
  $permissions['delete own empresa_financiera content'] = array(
    'name' => 'delete own empresa_financiera content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nube_documento content'.
  $permissions['delete own nube_documento content'] = array(
    'name' => 'delete own nube_documento content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'CESFUR' => 'CESFUR',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in categorias_documentos'.
  $permissions['delete terms in categorias_documentos'] = array(
    'name' => 'delete terms in categorias_documentos',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in codigo_de_paises'.
  $permissions['delete terms in codigo_de_paises'] = array(
    'name' => 'delete terms in codigo_de_paises',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any anti_cliente content'.
  $permissions['edit any anti_cliente content'] = array(
    'name' => 'edit any anti_cliente content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any empresa_financiera content'.
  $permissions['edit any empresa_financiera content'] = array(
    'name' => 'edit any empresa_financiera content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nube_documento content'.
  $permissions['edit any nube_documento content'] = array(
    'name' => 'edit any nube_documento content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own anti_cliente content'.
  $permissions['edit own anti_cliente content'] = array(
    'name' => 'edit own anti_cliente content',
    'roles' => array(
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own empresa_financiera content'.
  $permissions['edit own empresa_financiera content'] = array(
    'name' => 'edit own empresa_financiera content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nube_documento content'.
  $permissions['edit own nube_documento content'] = array(
    'name' => 'edit own nube_documento content',
    'roles' => array(
      'Administrador' => 'Administrador',
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'CESFUR' => 'CESFUR',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sms number'.
  $permissions['edit own sms number'] = array(
    'name' => 'edit own sms number',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'twilio',
  );

  // Exported permission: 'edit terms in categorias_documentos'.
  $permissions['edit terms in categorias_documentos'] = array(
    'name' => 'edit terms in categorias_documentos',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in codigo_de_paises'.
  $permissions['edit terms in codigo_de_paises'] = array(
    'name' => 'edit terms in codigo_de_paises',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'field hidden administer'.
  $permissions['field hidden administer'] = array(
    'name' => 'field hidden administer',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'field_hidden',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import countries_feed feeds'.
  $permissions['import countries_feed feeds'] = array(
    'name' => 'import countries_feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import user feeds'.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'features',
  );

  // Exported permission: 'modificar contenido misma empresa'.
  $permissions['modificar contenido misma empresa'] = array(
    'name' => 'modificar contenido misma empresa',
    'roles' => array(),
    'module' => 'cesfur_perm',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrador' => 'Administrador',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrador' => 'Administrador',
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrador' => 'Administrador',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'twilio_validation'.
  $permissions['twilio_validation'] = array(
    'name' => 'twilio_validation',
    'roles' => array(),
    'module' => 'auth_twilio_login',
  );

  // Exported permission: 'unlock countries_feed feeds'.
  $permissions['unlock countries_feed feeds'] = array(
    'name' => 'unlock countries_feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user feeds'.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrador' => 'Administrador',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format texto_con_formato'.
  $permissions['use text format texto_con_formato'] = array(
    'name' => 'use text format texto_con_formato',
    'roles' => array(
      'Administrador' => 'Administrador',
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'CESFUR' => 'CESFUR',
      'Editor' => 'Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'ver autor de anticlientes'.
  $permissions['ver autor de anticlientes'] = array(
    'name' => 'ver autor de anticlientes',
    'roles' => array(
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'cesfur_perm',
  );

  // Exported permission: 'ver empresas financieras'.
  $permissions['ver empresas financieras'] = array(
    'name' => 'ver empresas financieras',
    'roles' => array(
      'CESFUR' => 'CESFUR',
    ),
    'module' => 'cesfur_perm',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrador' => 'Administrador',
      'Administrador de Empresa Financiera' => 'Administrador de Empresa Financiera',
      'CESFUR' => 'CESFUR',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrador' => 'Administrador',
    ),
    'module' => 'system',
  );

  return $permissions;
}
