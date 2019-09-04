##9/3/19 - 5:00pm

I have tried multiple times to create a merge conflict. I have created two different files with the same set of files and documents then changed conflict_a to conflict on one, and conflict_b to conflict on the other. Then committed and pushed both to the github. Did not create a conflict.

I have also tried doing it on just one repository. That didn't work. I can't think nor find on the internet what else I am meant to do to create this merge conflict.

On a random not I was able to fix a merge conflict I have between your master repository and my fork.

Used git bash to create a branch made them different. pushed both, no problems. Then tried merging the two which I believe had no problems. I am having trouble understanding what I am reading.

##9/3/19 - 8:00 pm

Finally made a breakthrough. Looks like I was simply going about taking out the two files the wrong way. I was syncing the second file before changing the conflict files. This didn’t work because the new folder was then up to date so all changes were already logged into it. This time though, I was able to check out two new folders at the same time and make the changes to each before pushing either. This allowed me to finally create the merge conflict. Fixing the merge conflict was substantially easier to figure out. 

As I tried to push the second folder’s changes, I was sent an error message saying that I couldn’t push at this point in time. I pulled the files from github which allowed me to easily merge them on visual studio code.

Overall I was forced to “go down the rabbit hole” which for now remains a waste of my time due to my mistakes. Though, I do believe that this will come in handy one day. I tried a lot of things to fix the problems I was having, which allowed me to learn about a few new things like branches in GitHub, git bash and it’s commands, and how to research issues on the internet when it comes to coding issues, github issues, and merging issues.

For future students: Overall I believe that my biggest issue with this project was just my overthinking of it. I should have spent more time working with two separate folders. It would have saved me a lot of time. Some of my other classmates were struggling with the concept of repositories, so I think it might be important in the future to clearly define this for students. 

