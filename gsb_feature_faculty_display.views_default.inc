<?php
/**
 * @file
 * gsb_feature_faculty_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_faculty_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faculty_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faculty Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_academic_area_single_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_centers_research_programs_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'designed-box';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );

  /* Display: faculty-list */
  $handler = $view->new_display('panel_pane', 'faculty-list', 'faculty_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-faculty-filters';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['waypoint']['infinite'] = 0;
  $handler->display->display_options['pager']['options']['more_button_text'] = 'show more';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no results found.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_image_single_public']['id'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['table'] = 'field_data_field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['field'] = 'field_image_single_public';
  $handler->display->display_options['fields']['field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['field_image_single_public']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_single_public']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_single_public']['settings'] = array(
    'image_style' => '170x170',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['field_rank']['id'] = 'field_rank';
  $handler->display->display_options['fields']['field_rank']['table'] = 'field_data_field_rank';
  $handler->display->display_options['fields']['field_rank']['field'] = 'field_rank';
  $handler->display->display_options['fields']['field_rank']['label'] = '';
  $handler->display->display_options['fields']['field_rank']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rank']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );
  /* Filter criterion: Content: Academic Area (field_academic_area_single) */
  $handler->display->display_options['filters']['field_academic_area_single_tid']['id'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['table'] = 'field_data_field_academic_area_single';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['field'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['operator_id'] = 'field_academic_area_single_tid_op';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['label'] = 'Academic Areas';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['operator'] = 'field_academic_area_single_tid_op';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['identifier'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_academic_area_single_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['vocabulary'] = 'academic_area';
  /* Filter criterion: Content: Centers and Research Programs (field_centers_research_programs) */
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['id'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['table'] = 'field_data_field_centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['field'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator_id'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['label'] = 'Center/Research Program Affiliation';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['identifier'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['vocabulary'] = 'centers_research_programs';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['faculty_filters'] = $view;

  $view = new view();
  $view->name = 'search_faculty';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__acquia_search_server_1';
  $view->human_name = 'Search faculty';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-faculty-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'keyword' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'designed-box';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no results found.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['ss_field_image_single_public']['id'] = 'ss_field_image_single_public';
  $handler->display->display_options['fields']['ss_field_image_single_public']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['ss_field_image_single_public']['field'] = 'ss_field_image_single_public';
  $handler->display->display_options['fields']['ss_field_image_single_public']['label'] = '';
  $handler->display->display_options['fields']['ss_field_image_single_public']['alter']['text'] = '[ss_field_image_single_public]';
  $handler->display->display_options['fields']['ss_field_image_single_public']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sm_field_rank']['id'] = 'sm_field_rank';
  $handler->display->display_options['fields']['sm_field_rank']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_rank']['field'] = 'sm_field_rank';
  $handler->display->display_options['fields']['sm_field_rank']['label'] = '';
  $handler->display->display_options['fields']['sm_field_rank']['element_label_colon'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'faculty';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Search the Faculty Directory';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['search_faculty'] = $view;

  return $export;
}
