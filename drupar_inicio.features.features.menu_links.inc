<?php
/**
 * @file
 * drupar_inicio.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupar_inicio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ayuda:node/4
  $menu_links['main-menu_ayuda:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Ayuda',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_ayuda:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pas:node/1420
  $menu_links['main-menu_pas:node/1420'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1420',
    'router_path' => 'node/%',
    'link_title' => 'País',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_pas:node/1420',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_reas:node/1521
  $menu_links['main-menu_reas:node/1521'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1521',
    'router_path' => 'node/%',
    'link_title' => 'Áreas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_reas:node/1521',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_span-classglyphicon-glyphicon-searchspan:node/1
  $menu_links['main-menu_span-classglyphicon-glyphicon-searchspan:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => '<span class="glyphicon glyphicon-search"></span>',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'buscador',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_span-classglyphicon-glyphicon-searchspan:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-2_ayuda:node/4
  $menu_links['menu-footer-2_ayuda:node/4'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Ayuda',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-2_ayuda:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-2_pas:node/1420
  $menu_links['menu-footer-2_pas:node/1420'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'node/1420',
    'router_path' => 'node/%',
    'link_title' => 'País',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-2_pas:node/1420',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-2_reas:node/1521
  $menu_links['menu-footer-2_reas:node/1521'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'node/1521',
    'router_path' => 'node/%',
    'link_title' => 'Áreas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-2_reas:node/1521',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-2_servicios:servicios
  $menu_links['menu-footer-2_servicios:servicios'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'servicios',
    'router_path' => 'servicios',
    'link_title' => 'Servicios',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-2_servicios:servicios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-3_transparencia:node/1524
  $menu_links['menu-footer-3_transparencia:node/1524'] = array(
    'menu_name' => 'menu-footer-3',
    'link_path' => 'node/1524',
    'router_path' => 'node/%',
    'link_title' => 'Transparencia',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-3_transparencia:node/1524',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-3_trminos-y-condiciones:node/1
  $menu_links['menu-footer-3_trminos-y-condiciones:node/1'] = array(
    'menu_name' => 'menu-footer-3',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Términos y condiciones',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-3_trminos-y-condiciones:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<span class="glyphicon glyphicon-search"></span>');
  t('Ayuda');
  t('País');
  t('Servicios');
  t('Transparencia');
  t('Términos y condiciones');
  t('Áreas');

  return $menu_links;
}
