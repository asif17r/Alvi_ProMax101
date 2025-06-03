#!/usr/bin/env python3
import os

repo_root = os.path.dirname(os.path.abspath(__file__))
unsolved_dir = os.path.join(repo_root, "Unsolved")
unsolved_links = []

if os.path.exists(unsolved_dir):
    for file in sorted(os.listdir(unsolved_dir)):
        if file.endswith(".cpp"):
            rel_path = os.path.join("Unsolved", file)
            unsolved_links.append(f"- [{file}]({rel_path})")

if unsolved_links:
    section = (
        "## Unsolved Problems\n" +
        "The following problems are in the `Unsolved` folder. Alvi, try to solve these soon!\n\n" +
        "\n".join(unsolved_links) + "\n"
    )
else:
    section = "## Unsolved Problems\n\n_No unsolved problems found._\n"

readme_path = os.path.join(repo_root, "README.md")

with open(readme_path, "r") as f:
    lines = f.readlines()

# Remove old Unsolved Problems section if present
start = end = None
for i, line in enumerate(lines):
    if line.strip() == "## Unsolved Problems":
        start = i
    if start is not None and (line.strip() == "---" or line.strip().startswith("# ")) and i > start:
        end = i
        break

if start is not None:
    if end is None:
        end = len(lines)
    lines = lines[:start] + lines[end:]

# Insert new section before the final '---' or at the end
for i, line in enumerate(lines):
    if line.strip() == "---":
        insert_at = i
        break
else:
    insert_at = len(lines)

lines = lines[:insert_at] + [section] + lines[insert_at:]

with open(readme_path, "w") as f:
    f.writelines(lines)

print("README.md updated with Unsolved Problems section. Alvi, try to solve them!")
