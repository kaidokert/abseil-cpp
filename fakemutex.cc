#include "absl/synchronization/mutex.h"

namespace absl {

void Mutex::Lock() {}
void Mutex::Unlock() {}
void Mutex::ReaderLock() {}
void Mutex::ReaderUnlock() {}
void Mutex::AssertHeld() const {}

}
//#error "foo"