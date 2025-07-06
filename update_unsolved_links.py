#!/usr/bin/env python3
import os
from datetime import date

repo_root = os.path.dirname(os.path.abspath(__file__))
unsolved_dir = os.path.join(repo_root, "Unsolved")
unsolved_links = []

if os.path.exists(unsolved_dir):
    for file in sorted(os.listdir(unsolved_dir)):
        if file.endswith(".cpp"):
            rel_path = os.path.join("Unsolved", file)
            unsolved_links.append(f"- [{file}]({rel_path})")

# Count all .cpp files except those in Unsolved
cpp_count = 0
for root, dirs, files in os.walk(repo_root):
    # Skip Unsolved folder
    if os.path.relpath(root, repo_root).startswith("Unsolved"):
        continue
    for file in files:
        if file.endswith(".cpp"):
            cpp_count += 1

today = date.today().strftime('%B %d, %Y')

readme_template = f"""# Alvi_ProMax101 Solutions Repository

✨ **Total Problems Solved till {today}: {cpp_count}** ✨

This repository hosts C++ solutions by Alvi for a variety of programming problems. Each solution is organized by day and problem, and most files include both the problem statement and sample input/output for clarity.

## Structure
- **Day XX/**: Contains problems solved on a specific day **DURING CLASS**, with each file named according to the problem it solves.
- **Extra/**: Contains problems solved outside of class, following the naming convention `Day_<day_number>_<problem_name>.cpp`.

## What You'll Find
- Well-commented C++ solutions for each problem.
- Problem statements and sample test cases included at the top of each file.
- A clear folder structure for easy navigation and reference.

## Unsolved Problems
The following problems are in the `Unsolved` folder. Alvi, try to solve these soon!

"""

if unsolved_links:
    readme_template += "\n".join(unsolved_links) + "\n"
else:
    readme_template += "_No unsolved problems found._\n"

readme_template += "---\n\nHappy coding!\n"

readme_path = os.path.join(repo_root, "README.md")
with open(readme_path, "w") as f:
    f.write(readme_template)

print(f"README.md fully regenerated with total problems solved ({cpp_count}) and Unsolved Problems section.")
