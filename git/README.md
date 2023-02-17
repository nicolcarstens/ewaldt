# Other Tools 

* This folder contains tools and tricks not specific to C++. 
* It really should not be here but it will be here for the moment as a quick and dirty scratch-pad.

### git command line (CL)

* For DETAILED explanations see [https://explainshell.com/](https://explainshell.com/)
* Also check out [Learn Git from w3docs](https://www.w3docs.com/learn-git/introduction4.html)

**Here with some QUICK references - git command line 101:**

```
$ git clone https://github.com/nicolcarstens/Nix-Uni-Cpp.git

$ git pull 

$ git add -A      // stages ALL changes <<-- check
$ git add *       // stages ALL changes <<-- check
$ git add .       // add all files to index => new files & mods, not deletions 
$ git add -u      // mods & deletions, no new files [--update]
$ git add xyx.c   // adds file xyz.c
 
$ git rm -r xyz   // remove/delete directory xyz & content recursively 

$ git diff --name-only --cached 
$ git diff --name-only              // name(s) of edited file(s)
$ git diff                          // all of the edits in files

$ git commit -m "commit message" 

$ git push 

$ git branch project_L1     // creates a new branch
$ git checkout project_L1   // switch to the new branch

$ git push ... but OOOOOPS!!

   !!! fatal: The current branch project_L1 has no upstream branch.
   !!! To push the current branch and set the remote as upstream, use...

$ git push --set-upstream origin project_L1

   ... or should that be ... 

$ git push -u origin project_L1

   ... same thing :-) 
   ... see (https://devconnected.com/how-to-set-upstream-branch-on-git/)

$ git branch --list                 // Show all branches, current "starred"
$ git rev-parse --abbrev-ref HEAD   // Get current branch only

$ git checkout master               // switch back to the master 

$ clear
$ git log

$ clear 
$ git status

$ ls -al
```
**_Other good links on push and other git topics:_**

* [https://help.github.com/en/github/using-git/pushing-commits-to-a-remote-repository](https://help.github.com/en/github/using-git/pushing-commits-to-a-remote-repository)
* [https://devconnected.com/category/software-engineering/](https://devconnected.com/category/software-engineering/)
* [https://www.git-tower.com/learn/git/commands/git-push](https://www.git-tower.com/learn/git/commands/git-push)
* [https://www.atlassian.com/git/tutorials/saving-changes/git-stash](https://www.atlassian.com/git/tutorials/saving-changes/git-stash)

### [more on] git branches
* You have a repo with branches at the origin. You have cloned the master. What about branches? You need to check them out.
* See [https://stackoverflow.com/questions/10312521/how-to-fetch-all-git-branches](https://stackoverflow.com/questions/10312521/how-to-fetch-all-git-branches)

``` 
$ git branch --list [OR just -l]    // Show all local branches, current "starred"
$ git rev-parse --abbrev-ref HEAD   // Get current branch only
$ git checkout master               // switch back to the master

$ git branch --remote [OR just -r]  // Lists all remote branches available

$ git checkout -b LocalName origin/RemoteBranchName
 
$ git branch -a                     // lists local and remote branches 
```

### git delete local branch

* [https://www.educative.io/edpresso/how-to-delete-remote-branches-in-git](https://www.educative.io/edpresso/how-to-delete-remote-branches-in-git)

```
$ git branch -a                      // lists local and remote branches 
$ git branch -l                      // lists local branches only 
$ git branch -d BranchNameToDelete   // deletes branch 
```

### git bare repository

* [https://www.atlassian.com/git/tutorials/setting-up-a-repository/git-init](https://www.atlassian.com/git/tutorials/setting-up-a-repository/git-init)
* [Video on Bare Repo](https://youtu.be/krR847J8yPc)

```
$ git init --bare <directory>
```

### git remotes 

* [https://youtu.be/5ctkqMqG6G4](https://youtu.be/5ctkqMqG6G4)
* [https://youtu.be/Gg4bLk8cGNo](https://youtu.be/Gg4bLk8cGNo)

```
$ git remote -v
```

### git store credentials 

* [Shellhacks: it-config-username-password-store-credentials/](https://www.shellhacks.com/git-config-username-password-store-credentials/)
* [Stackoverflow: how to save git Username and Password](https://stackoverflow.com/questions/35942754/how-to-save-username-and-password-in-git-gitextension)

Run the following command to enable credentials storage in your Git repository:
```
$ git config credential.helper store
```
To enable credentials storage globally, run:
```
$ git config --global credential.helper store
```

### C++ CL compile

```
>> g++ -std=c++14 -pthread myfile.cpp
>> ./a.out 

... or ... 

>> g++ -std=c++14 -pthread myfile.cpp && ./a.out 
```

