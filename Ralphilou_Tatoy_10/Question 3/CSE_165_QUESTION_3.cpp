//    // Place Condition2 test code inside of the Condition2 class.
//
//    // Test programs should have exactly the same behavior with the
//    // Condition and Condition2 classes.  You can first try a test with
//    // Condition, which is already provided for you, and then try it
//    // with Condition2, which you are implementing, and compare their
//    // behavior.
//
//    // Do not use this test program as your first Condition2 test.
//    // First test it with more basic test programs to verify specific
//    // functionality.
//
//    public static void cvTest5() {
//        final Lock lock = new Lock();
//        // final Condition empty = new Condition(lock);
//        final Condition2 empty = new Condition2(lock);
//        final LinkedList<Integer> list = new LinkedList<>();
//
//        KThread consumer = new KThread( new Runnable () {
//                public void run() {
//                    lock.acquire();
//                    while(list.isEmpty()){
//                        empty.sleep();
//                    }
//                    Lib.