// Important Points about Condition Variables (CV):

// 1. Purpose of Condition Variables:
//  - Notify other threads: CV allows one thread to notify other threads that a certain condition has been met.
//  - Waiting for some conditions: CV allows a thread to wait until a certain condition is met before proceeding.

// 2. Key Points about Condition Variables:
// Condition Variables allow threads to wait on certain conditions. Once those conditions are met, the waiting threads can be notified using:

// notify_one(): Notifies one waiting thread.
// notify_all(): Notifies all waiting threads.
// Mutex is required: A mutex is required to use condition variables.

// 3. Steps to Wait on a Condition Using Condition Variables:
// Acquire the mutex lock:
// Use std::unique_lock<std::mutex> lock(m); to acquire the mutex lock.
// Execute wait, wait_for, or wait_until:
// These operations automatically release the mutex and suspend the thread's execution.
// When the condition variable is notified:
// The thread is awakened.
// The mutex is automatically re-acquired.
// The thread should check the condition and resume waiting if the wake-up was spurious.

// 4. Additional Notes:

// Condition variables are used to synchronize two or more threads.
// The best use case for a condition variable is the Producer/Consumer problem.