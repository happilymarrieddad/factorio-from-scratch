#include "smart_pointer.hpp"



// Constructors
template<class T>
smart_pointer<T>::smart_pointer() {
	rawPointer = NULL;
}

template<class T>
smart_pointer<T>::smart_pointer(T* ptr) {
	rawPointer = ptr;
}

template<class T>
smart_pointer<T>::smart_pointer(smart_pointer<T>&& source) { // Move constructor
	if (source != NULL) {
		rawPointer = source.getPointer();
		source.setPtrToNull();
	}
}

template<class T>
smart_pointer<T>::smart_pointer(const smart_pointer& source) { // Copy Constructor
	if (source != NULL) {
		rawPointer = source.getPointer();
	} else {
		rawPointer = NULL;
	}
}

template<class T>
smart_pointer<T>::~smart_pointer() {
	if (rawPointer != NULL) {
		delete rawPointer;
	}
}







// Operator overloading
template<class T>
smart_pointer<T>& smart_pointer<T>::operator=(smart_pointer<T>&& source) { // Copy operator
	if (this != &source) {
		delete [] rawPointer;
		rawPointer = source.getPointer();
		source.setPtrToNull();
	}
}

template<class T>
T& smart_pointer<T>::operator* () { // Dereferencing pointer
	return *(rawPointer);
}

template<class T>
T* smart_pointer<T>::operator->() const { // Member selection operator
	return rawPointer;
}

template<class T>
GLboolean smart_pointer<T>::operator==(const smart_pointer<T>& compareTo) {
	return rawPointer == compareTo.getPointer();
}

template<class T>
GLboolean smart_pointer<T>::operator!=(const smart_pointer<T>& compareTo) {
	return rawPointer != compareTo.getPointer();
}







// Methods
template<class T>
void smart_pointer<T>::setPtrToNull() {
	rawPointer = NULL;
}









// Functions
template<class T>
GLboolean smart_pointer<T>::isNull() {
	return rawPointer == NULL;
}

template<class T>
T* smart_pointer<T>::getPointer() {
	return rawPointer;
}