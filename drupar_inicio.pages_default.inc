<?php
/**
 * @file
 * drupar_inicio.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function drupar_inicio_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_node_overview__default';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'node_overview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
  );
  $display = new panels_display();
  $display->layout = 'pagina-principal-argentina';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle1' => NULL,
      'middle2' => NULL,
      'middle3' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c812f401-3466-49d0-9799-721bdb84fee5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b02954a-91ea-415c-a959-b51b5d71469c';
    $pane->panel = 'middle1';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'fa fa-user',
      'titulo' => 'Renovar el DNI',
      'texto' => 'Si cambiaste el domicilio, perdiste el documento, te lo robaron o se te estropeó, sacá uno nuevo. Hacelo antes del 1 de agosto si tenés el viejo DNI verde, Libreta Cívica o de Enrolamiento y menos de 75 años.',
      'cuerpo' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'referencia' => array(
        'entity_id' => '15',
        'entity_label' => 'Renovar el DNI',
        'entity_type' => 'node',
        'entity_bundle' => 'page',
      ),
      'link' => '',
      'formato_de_shortcut' => 'destacado',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-secondary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b02954a-91ea-415c-a959-b51b5d71469c';
    $display->content['new-6b02954a-91ea-415c-a959-b51b5d71469c'] = $pane;
    $display->panels['middle1'][0] = 'new-6b02954a-91ea-415c-a959-b51b5d71469c';
    $pane = new stdClass();
    $pane->pid = 'new-d597b850-a948-4b38-9d34-45358ffc28db';
    $pane->panel = 'middle1';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'fa fa-check',
      'titulo' => 'Obtener Certificación Negativa de ANSES',
      'texto' => 'Si te pidieron un comprobante de que no estás recibiendo ningún aporte o beneficio (jubilación, pensión, plan, programa, etc.), podés tramitar esta certificación desde aquí.',
      'cuerpo' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'referencia' => array(
        'entity_id' => '871',
        'entity_label' => 'Certificación Negativa - ANSES',
        'entity_type' => 'node',
        'entity_bundle' => 'argentinagobar_migtram',
      ),
      'link' => '',
      'formato_de_shortcut' => 'destacado',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd597b850-a948-4b38-9d34-45358ffc28db';
    $display->content['new-d597b850-a948-4b38-9d34-45358ffc28db'] = $pane;
    $display->panels['middle1'][1] = 'new-d597b850-a948-4b38-9d34-45358ffc28db';
    $pane = new stdClass();
    $pane->pid = 'new-5cd70331-9dfd-4296-8cb9-9918824784ca';
    $pane->panel = 'middle1';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'fa fa-clock-o',
      'titulo' => 'Tramitar turnos para ANSES',
      'texto' => 'Para sacar, consultar o cancelar turnos en ANSES (ya sea por jubilación o pensión, asignación familiar, subsidio por desempleo, ayuda escolar anual, etc.).',
      'cuerpo' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'referencia' => array(
        'entity_id' => '715',
        'entity_label' => 'Solicitud y consulta de turnos vía Internet en la ANSES',
        'entity_type' => 'node',
        'entity_bundle' => 'argentinagobar_migtram',
      ),
      'link' => '',
      'formato_de_shortcut' => 'destacado',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-secondary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5cd70331-9dfd-4296-8cb9-9918824784ca';
    $display->content['new-5cd70331-9dfd-4296-8cb9-9918824784ca'] = $pane;
    $display->panels['middle1'][2] = 'new-5cd70331-9dfd-4296-8cb9-9918824784ca';
    $pane = new stdClass();
    $pane->pid = 'new-2fa5a09c-bfef-424b-8547-3b1d1c36f8d6';
    $pane->panel = 'middle1';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'fa fa-calendar',
      'titulo' => 'Consultar calendario de pago de ANSES',
      'texto' => 'Para jubilado o pensionado, beneficiario del programa PROGRESAR, de una pensión no contributiva, de una AUH, una asignación por embarazo, de un subsidio por desempleo o cualquier otro beneficio de ANSES.',
      'cuerpo' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'referencia' => array(
        'entity_id' => '1417',
        'entity_label' => 'Consultar calendario de pago de ANSES',
        'entity_type' => 'node',
        'entity_bundle' => 'page',
      ),
      'link' => '',
      'formato_de_shortcut' => 'destacado',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-secondary',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2fa5a09c-bfef-424b-8547-3b1d1c36f8d6';
    $display->content['new-2fa5a09c-bfef-424b-8547-3b1d1c36f8d6'] = $pane;
    $display->panels['middle1'][3] = 'new-2fa5a09c-bfef-424b-8547-3b1d1c36f8d6';
    $pane = new stdClass();
    $pane->pid = 'new-f29d066f-3ba8-4757-bafa-9d27f2ebb0ce';
    $pane->panel = 'middle2';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'iconarg-mod-lupa',
      'titulo' => 'Ver todos los servicios disponibles',
      'texto' => '',
      'cuerpo' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'referencia' => array(
        'entity_id' => '175',
        'entity_label' => 'Trámites especiales que se despachan mediante expedientes de secretaría',
        'entity_type' => 'node',
        'entity_bundle' => 'argentinagobar_migtram',
      ),
      'link' => '',
      'formato_de_shortcut' => 'boton',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f29d066f-3ba8-4757-bafa-9d27f2ebb0ce';
    $display->content['new-f29d066f-3ba8-4757-bafa-9d27f2ebb0ce'] = $pane;
    $display->panels['middle2'][0] = 'new-f29d066f-3ba8-4757-bafa-9d27f2ebb0ce';
    $pane = new stdClass();
    $pane->pid = 'new-04c967f8-ea9b-4ad7-9b30-eeca1ff0220c';
    $pane->panel = 'middle3';
    $pane->type = 'texto';
    $pane->subtype = 'texto';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'destacado' => 0,
      'texto' => array(
        'value' => '<div class="col-md-4 col-sm-6">
        <a href="/servicios" class="panel panel-default">
          <div class="panel-heading" style="background-image:url(img/home/servicios.jpg);"></div>
          <div class="panel-body">
            <h3 class="h2">Servicios</h3>
            <p class="text-muted">Todos los trámites del Estado para resolver tus necesidades fácilmente.</p>
          </div>
        </a>
      </div>
<div class="col-md-4 col-sm-6">
        <a href="/directorio" class="panel panel-default">
          <div class="panel-heading" style="background-image:url(img/home/areas.jpg);"></div>
          <div class="panel-body">
            <h3 class="h2">Áreas de Gobierno</h3>
            <p class="text-muted">Todas las áreas de gobierno, sus formas de contacto y sitios web.</p>
          </div>
        </a>
      </div>
<div class="col-md-4 col-sm-6">
        <a href="http://www.casarosada.gob.ar" class="panel panel-default">
          <div class="panel-heading" style="background-image:url(img/home/casarosada.jpg);"></div>
          <div class="panel-body">
            <h3 class="h2">Casa Rosada</h3>
            <p class="text-muted">Actividades y novedades del Poder Ejecutivo nacional.</p>
          </div>
        </a>
      </div>',
        'format' => 'full_html',
      ),
      'sobreescribir' => 1,
      'cuerpo_o_resumen' => 'body',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04c967f8-ea9b-4ad7-9b30-eeca1ff0220c';
    $display->content['new-04c967f8-ea9b-4ad7-9b30-eeca1ff0220c'] = $pane;
    $display->panels['middle3'][0] = 'new-04c967f8-ea9b-4ad7-9b30-eeca1ff0220c';
    $pane = new stdClass();
    $pane->pid = 'new-d47d29ac-f957-43a1-bae9-11cb1f42f617';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'argentinagobar_search-ApacheSolrInput';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd47d29ac-f957-43a1-bae9-11cb1f42f617';
    $display->content['new-d47d29ac-f957-43a1-bae9-11cb1f42f617'] = $pane;
    $display->panels['top'][0] = 'new-d47d29ac-f957-43a1-bae9-11cb1f42f617';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d47d29ac-f957-43a1-bae9-11cb1f42f617';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_node_overview__default'] = $handler;

  return $export;
}
