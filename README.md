rubystandard
============

Standard Drupal 7 installation profile for Ruby Design clients.

# Usage
    git clone https://github.com/malcomio/rubystandard.git
    cd rubystandard
    drush make build-rubystandard.make ../www/MYNEWSITE --prepare-install
    cd ../www/MYNEWSITE
    drush zen MYTHEMENAME --without-rtl


, including:
* WYSIWYG
* input filters
* admin_menu
* media settings
