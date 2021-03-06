<?php
/**
 * @file
 * cesfur_feature_migration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cesfur_feature_migration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menú principal',
    'description' => 'El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'El menú <em>Administrar</em> contiene enlaces a tareas administrativas.',
  );
  // Exported menu: menu-menu.
  $menus['menu-menu'] = array(
    'menu_name' => 'menu-menu',
    'title' => 'Menu CESFUR',
    'description' => 'Menu general para todos los usuarios',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navegación',
    'description' => 'El menú de <em>Navegación</em> contiene enlaces para los visitantes al sitio. Algunos módulos agregan enlaces al menú de <em>Navegación</em> automáticamente.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'El menú <em>Usuario</em> contiene enlaces relacionados con la cuenta del usuario, como el enlace \'Cerrar sesión\'.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('El menú <em>Administrar</em> contiene enlaces a tareas administrativas.');
  t('El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.');
  t('El menú <em>Usuario</em> contiene enlaces relacionados con la cuenta del usuario, como el enlace \'Cerrar sesión\'.');
  t('El menú de <em>Navegación</em> contiene enlaces para los visitantes al sitio. Algunos módulos agregan enlaces al menú de <em>Navegación</em> automáticamente.');
  t('Features');
  t('Management');
  t('Menu CESFUR');
  t('Menu general para todos los usuarios');
  t('Menu items for any enabled features.');
  t('Menú principal');
  t('Navegación');
  t('User menu');

  return $menus;
}
