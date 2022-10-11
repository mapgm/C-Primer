void StrVec::free()
{
	// 不能传递给deallocate一个空指针，如果elements为0，函数什么也不做
	if (elements) {
		// 逆序销毁元素
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

for_each(elements, first_free, [this](std::string &rhs){ alloc.destroy(&rhs); });
