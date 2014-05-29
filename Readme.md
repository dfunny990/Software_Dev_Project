Software Development Project
=============================

First and foremost, this is a work in progress. As I pursue the solution to this assignment, I will be following the lessons I learned in Software Development.

Secondly, this is not the only thing I am working on. While I will be working on this a bit every day, I am balancing this, job searching, and house work.


The steps I will take should go something like this:
 - Transform requirements into a use case diagram
 - Using the use case diagram, create a rough outline of the classes that will be needed to accomplish the uses.
 - Using these classes, I will create a sequence diagram for each use case in the diagram. This should give me a good idea of the functions needed in each class in order to complete the operations. It will also ensure that all operations are completed on the lowest levels possible.
 - I will use the functions outlined in the sequence diagrams to create a full class diagram, outlining every class and the methods and variables associated with them.
 - The Coding Begins! Using the class diagram, I can now implement the solution using coding.
 - As taught in the class, this implementation allows me to code a solution in any object oriented language I choose, and thus I am not limited until I absolutely have to be.

The assignment is to design a music sharing program designed to simulate lending music to friends and others.
It is also set up as a team project. As a team, I would try to convince my team that the above steps are the best way to approach the project.
If my teammates had a different approach, I would be open to suggestions and comprimise, as long as the method is not "Let's start coding NOW!"
That approach all too often leads to poorly written, hard to understand, inefficient code.

Development of a Music Sharing Management System
=====================================================

**Assignment Objective**
-------------------------
The objective is to give students experience in (1) team development of a medium sized software system, and (2) applying modeling techniques. You must work in a team no smaller than 4 persons and no larger than 5 persons.

**Assignment Tasks**
---------------------
You are required to do athe following in this assignment:
 - Form a team of no larger than 5 persons and no less than 4 presons to design and implement a music sharing system. The problem statement for the system is given below.
 - Develop a requirements model for the system. The requirements model must consist of (1) a requirements class model, and (2) use cases for the required major services to be provided by the software.
 - Develop a design model for the system. The design model must consist of (1) a design class model, and (2) sequence diagrams that show how each use case is implemented in the design.
 - Develop a Java implementation of the design. (I will also possibly develop a C++ implementation)

**Deliverables**
-----------------
You are required to submit the following:
1. A requirements document that consists of
 - A requirements model: The requirements model must consist of (1) a requirements class model, and (2) use cases for the required major services to be provided by the software.
 - A statement of all the assumptions you made about the required behavior. The assumptions must not contradict any of the requirements in the problem statement.Each assumption must be presented in the following format:
*Your question: Your answer (the assumption).*
An example of an assumption is given below
*Question: What happens when a friend requests to borrow a song when the owner is playing the song? Ans: The request is queued. The quque is checked for loan requests after the song has finished playing.*

2. A design document that consists of
 - A design model: The design model must consist of (1) a design class model, and (2) sequence diagrams that show how each use case is implemented in the design.
 - Design justification: Make the case that your design is of good quality.
3. A Java implementation
4. Review each of your team members.

**Acknowledgements**
---------------------------
The following statement is a slightly modified version of a problem statement written by Trevan Hombs, a past CS517 student. Trevan developed and analyzed a formal design for this system as part of his CS517 project.

**Problem Statement**
------------------------
The Music Sharing Management System (MSMS) allows users on a computer to share their music. The MSMS allows users to loan copies of songs to other users in the same manner as a physical copy of music can be loaned. For example, if a friend lends you hard copy of the music on a CD, that hard copy is no longer in the possession of the friend (the owner). This would create a social aspect to music listening that has been lost in the digital age. The MSS would have the following features:
 - Users can establish friend relationships with other users in the system. To set up a friend relationship, a user must first invite another user in the system to be a friend. If the invited user accepts then a friend relationship is set up between the two users.
 - Users can browse their friends' music libraries and request to borrow their friends' music.
 - A user can make their entire library available for browsing by anyone in the system or available for browsing by friends only.
 - Users can add new songs, remove songs, search for friends with songs, search for songs within friends, and search for songs outside their circle of friends.
 - Users can organize their songs into playlists. A user can also choose to display their library sorted by artiste, title, or by genre. Songs that have been loaned out should be marked as not available for playback.
 - There shall be a limit as to how many times a user can borrow the same song from the same friend. There will be a default limit of 3 times, but the owner can change this limit.
 - If a song is loaned to a friend, the owner (the user that owns a song) cannot lend the song to anyone else, nor can the owner play/listen to the song. When a song is currently borrowed, the owner does not technically have that song in his/her library. What I mean by technically is that the borrower can listen to it and the owner cannot. However, anytime the owner wants the song back, the owner can take it back with no questions.
 - Friends could get on a waiting list to borrow a song.
 - Owners can specify how long they will allow a friend to borrow a song. The length can be in units of time or units of song listens.
 - Owners can specify, song-by-song, whether a song has to be approved for borrowing or can be borrowed by friends without approval. Owners can also mark songs as not borrowable.

Each song must have at least the following metadata associated with it:

**Song MetaData**
 - Name: Name of the song, e.g., "Maria"
 - Artist: Name of the performer, e.g., "Branford Marsalis"
 - Album: Name of album containing song e.g., "Steep Anthology"
 - Year: Year in which the song was released, e.g., "2004"
 - Composer: Names of composers. e.g., "Leonard Bernstein, Stephen Sondheim"
 - Genre: Class of music that the song belongs to, e.g., "Jazz"

When the system first starts up it reads a file containing data on users and their libraries, and on friend relationships.
For example consider an initial system that consists of three users with usernames jweston, mkelly, and jbilal where passwords are musicQ, sean123, and dean543musiq, respectively.
In this system, jweston is friends with mkelly, and mkelly is also friends with jbilal. Below is a file containing information about the music libraries of these three users that iss be used to initialize the MSMS.
 - jweston, musicQ \[Maria, Branford Marsalis, Steep Anthology, 2004, Leonard Bernstein Stephen Sondheim, Jazz | Jodys Grind, Bob james,,,,Jazz] (mkelly)
 - mkelly sean123 \[The Bass Man, Marcus Wooten, In Bass Clef, 2013, R Crunk, Alternative | My Way, Uber Daft, Going Past the Future, 2012,,Alternative | The reason, Heather Headley,,2012,,R&B](jweston, jbilal)
 - jbilal, dean543musiq \[Breakdown, Gary Clark, Blak and Blu, 2013, Gary Clark, Rock](mkelly)

From the above, each line in the input file contains information for a single user. The information on each line is structured as follows:

Username, Password \[Song metadata, separated by "|"; items in the order shown under **Song Metadata** shown above] (friends of user)

Note that each song must have a name and artist, but the other information (metadata) is optional.

**Notes**
-----------------
 - **System:** For the purposes of this assignment, assume this is a system that resides on a single machine (not realistic, but it avoids you having to develop a distributed/network/based application).
Note that the libraries of all users are available ofr permissible browsing, searching and loaning once the system is running (e.g., a user does not have to be logged in for another user to browse the user's library or to send a request to borrow a song).
A user must be logged in to send requests and respond to requests to borrow songs.
More than 1 user can be logged in at any time. You should have a feature that allows the graders to switch users on a single machine so that they can test your software with multiple users logged in.
 - **Out of Scope Features:**
 -  - Your system is not requred to actually play songs.
 -  - Your system is not required to support buying of songs.
 -  - You are not required to implement a distributed system with client and server software.
 -  - You are not required to store (persist) the data in a database. You may have a feature that saves the current state of user libraries in a flat file before the program exits. This flat file could then be read in as input when the program is next started. This is not required.
 -  - You are not required to support downloading of songs on devices, to the cloud, etc. (you will have the opportunity to explore this extension in Assignment 3). (I will address this in a different repository).
 - **User Interface:** You are free to design an appropriate user interface. The quality of your user interface will be graded.
Specifically, we will count the number of steps needed by the user to complete a task, and we will evaluate how you guide the user in accomplishing his/her tasks (are the interface labels meaningful? Is the feedback given to the user informative?)
 - **Questions & Assumptions:** As usual, the requirements may be incomplete, ambiguous, etc.
You can make assumptions about what is required if the information is not stated explicitly in the requirements (this means that you do not have to send questions to the TA).
These assumptions must not contradict nor negate any of the requirements stated explicitly.
You must state all your assumptions in the requirements document. Each assumption must be written as a *question:answer* pair.
See the requirements document description in the Deliverables section for more information.