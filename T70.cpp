// STL = containers + Algo + Iterators
// Containers= Object with stores Data
// Iterator = Object which points to an element
/*
* Types of containers:
        1- Sequence containers:         Linear fashion--        e.g. = Vector, List, Dequeue
        2- Associated containers:       Direct access--         e.g. = map, multimap, set, multiset
        3- Derived containers:          Real world modelling--  e.g. = queue, Stack, priority-queue

** When to use which
        Sequence containers:
                1. Vector -> Random access = fast
                             Middle Insertion/Deletion = slow
                             Insertion at the end = fast
                2. List -> Random access = slow
                           Middle Insertion/Deletion = fast
                           Insertion at the end = fast
        Associative Containers:
                1. All operations are fast except Random Access
        Derived Containers:
                Speed Depends on Data structure
*/