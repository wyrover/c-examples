includeexternal ("premake-vs-include.lua")

workspace "c-examples"
    language "C++"
    location "build/%{_ACTION}/%{wks.name}"    
    if _ACTION == "vs2015" then
        toolset "v140_xp"
    end

    

    group "c-examples"    
--        project "ZipDLL"            
--            kind "SharedLib"                         
--            files
--            {
--                "ZipDLL/*.def",   
--                "ZipDLL/**.h",
--                "ZipDLL/**.cpp", 
--                "ZipDLL/**.c"
--                
--            }   
--            has_stdafx("ZipDLL", ".")
        
        create_console_project("c-file-example", "src")
        create_console_project("c-function-pointers-01", "src")
        create_console_project("c-function-pointers-02", "src")

        create_console_project("c-type-casting-structure-pointers", "src")
            
        create_console_project("7z-dll-test", "src")
            includedirs
            {
                "3rdparty/7zpp"
            }
            links
            {
                "7zpp"
            }