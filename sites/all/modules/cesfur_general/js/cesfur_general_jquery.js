jQuery(document).ready(function(){
    /** Find the button which contains "Revisions link" then delete it (I want to override that with another button I created on the view "Revisions per node") **/
    var revisionesBtn = '.page-node .tabs .tabs.primary li';
    var isNubeDocumento = '.node-type-nube-documento';

    var patternToRemove = 'revisions';
    if(jQuery(isNubeDocumento).length > 0) {
        //Remove all the revision buttons.
        patternToRemove = 'revision';
    }

    jQuery(revisionesBtn).each(function(idx, element){
        var href = jQuery(element).find('a').attr('href');
        if(href.indexOf(patternToRemove) !== -1) {
            jQuery(element).remove();
        }
    });
});