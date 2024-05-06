import unreal

def rename_assets(search_pattern, replace_pattern, use_case):
    system_lib = unreal.SystemLibrary()
    editor_util = unreal.EditorUtilityLibrary()
    string_lib = unreal.StringLibrary()

    #selected assets
    selected_assets = editor_util.get_selected_assets()
    num_assets = len(selected_assets)
    replaced = 0
    unreal.log("Selected {} assets".format(num_assets))

    for asset in selected_assets:
        asset_name = system_lib.get_object_name(asset)
        
        if string_lib.contains(asset_name, search_pattern, use_case):
            search_case = unreal.SearchCase.CASE_SENSITIVE if use_case else unreal.SearchCase.IGNORE_CASE
            replaced_name = string_lib.replace(asset_name, search_pattern, replace_pattern, search_case=search_case)
            editor_util.rename_asset(asset, replaced_name)

            replaced += 1
            unreal.log("Replaced {} with {}".format(asset_name, replaced_name))
        else:
            unreal.log("{} asset is named properly".format(asset_name))

    unreal.log("Replaced {} assets".format(replaced))

rename_assets("test", "Old", False)