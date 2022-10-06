---- COMMANDS ----

function cleanWorkspaces()
    print("cleaning workspaces...")
    os.rmdir("./workspaces")
    print("done.")
end

function cleanBuild()
    print("cleaning build...")
    os.rmdir("./build")
    print("done.")
end

-- Clean Workspaces --
newaction {
    trigger     = "clean-workspaces",
    description = "clean workspaces",
    execute     = cleanWorkspaces
}

-- Clean Build --
newaction {
    trigger     = "clean-build",
    description = "clean build",
    execute     = cleanBuild
}

-- Clean All --
newaction {
    trigger     = "clean",
    description = "clean workspaces + build",
    execute     = function ()
        cleanWorkspaces()
        cleanBuild()
    end
}