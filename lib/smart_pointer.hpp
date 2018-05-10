template <typename T>
class smart_pointer {
private:
	T* rawPointer;
public:
	// Constructors
	smart_pointer();
	smart_pointer(T* ptr);
	smart_pointer(smart_pointer<T>&& source); // Move Constructor
	smart_pointer(const smart_pointer& source); // Copy Constructor
	~smart_pointer();

	// Operator overloading
	smart_pointer& operator=(smart_pointer<T>&& source);
	T& operator* (); // Dereferencing pointer
	T* operator->() const; // Member selection operator
	GLboolean operator==(const smart_pointer<T>& compareTo);
	GLboolean operator!=(const smart_pointer<T>& compareTo);

	// Methods
	void setPtrToNull();

	// Functions
	GLboolean isNull();
	T* getPointer();

};