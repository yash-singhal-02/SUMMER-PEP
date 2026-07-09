/*
floyd loop detection -
part 1 -> detect if loop exist
    fast slow pointer approach
        init fast and slow at head
        move slow by 1 step and fast by 2 steps until fast becomes null or fast next becomes null
        if fast and slow becomes equal, loop exit

part 2 -> if loops exists, remove loop
    re initialize slow at head again, keep fast at same place
    move slow and fast by 1 step, where they instersected(lets call it i), that will be the starting node

part 3 -> if loop exists, rmove loop
    create a temo at i
    move temp until temp->next != i
    then make temp->next == NULL

*/