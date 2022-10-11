void StrVec::free()
{
	// ���ܴ��ݸ�deallocateһ����ָ�룬���elementsΪ0������ʲôҲ����
	if (elements) {
		// ��������Ԫ��
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

for_each(elements, first_free, [this](std::string &rhs){ alloc.destroy(&rhs); });
