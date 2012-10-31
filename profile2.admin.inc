<?php

/**
 * @file
 * Profile type editing UI.
 */

/**
 * UI controller.
 */
class Profile2TypeUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage profiles, including fields.';
    return $items;
  }
}