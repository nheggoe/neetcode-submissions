class Solution:
    def removeSubfolders(self, folders: list[str]) -> list[str]:
        def parents(folder: str) -> set[str]:
            parts = folder.strip("/").split("/")
            return {
                "/" + "/".join(parts[:i])
                for i in range(1, len(parts))
            }

        registry = set(folders)
        return [
            folder
            for folder in folders
            if parents(folder).isdisjoint(registry)
        ]
