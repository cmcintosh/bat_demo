<?php

/**
 * @file
 * Contains a Views filter handler to take care of displaying the correct label
 * for unit bundles.
 */

class bat_unit_handler_type_id_filter extends views_handler_filter_many_to_one {

  function construct() {
    parent::construct();

    $types = bat_unit_get_types();

    $options = array();
    foreach ($types as $type) {
      $options[$type->type_id] = $type->name;
    }

    $this->value_options = $options;
  }

}
