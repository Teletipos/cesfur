<?php
/**
 * @file
 * cesfur_feature_migration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cesfur_feature_migration_taxonomy_default_vocabularies() {
  return array(
    'categorias_documentos' => array(
      'name' => 'Categorias documentos',
      'machine_name' => 'categorias_documentos',
      'description' => 'Categorias para los documentos en la NUBE',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'codigo_de_paises' => array(
      'name' => 'Codigo de paises',
      'machine_name' => 'codigo_de_paises',
      'description' => 'Codigo de países para utilizar en la comunicación con Twilio. (Por modulo auth_twilio_login)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
