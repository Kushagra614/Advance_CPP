// Points to remember about timed mutex is as follows:
// 0. std::timed_mutex is blocked till timeout_time or the lock is acquired and returns true if success 
//    otherwise false.


// 1. Member Function: 
//    a. lock 
//    b. try_lock
//    c. try_lock_for    ---\ These two functions makes it different from mutex.
//    d. try_lock_until  ---/ 
//    e. unlock


// std::timed_mutex is a type of mutex in the C++ Standard Library that allows a thread to wait for a specific amount of time to acquire the mutex.

// std::timed_mutex is used when a thread needs to wait for a mutex to be available, but only for a limited amount of time. If the mutex is not available within the specified time, the thread can choose to:

// Return an error code
// Try again later
// Perform some other action

