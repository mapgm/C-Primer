template<typename T>    //for class
template<typename It>   //for this member
Blob<T>::Blob(It b, It e) :
	data(std::make_shared<std::vector<T>>(b, e))
	{ }
