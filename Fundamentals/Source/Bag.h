#pragma once

template<typename Bag>
class Iterator
{
public:
	using ValueType = typename Bag::ValueType;
	using PointerType = ValueType*;
	using ReferenceType = ValueType&;
public:
	Iterator(PointerType _ptr) : ptr(ptr)
	{
	}

	Iterator& operator++()
	{
		++ptr;
		return *this;
	}

	Iterator operator++(int)
	{
		Iterator iterator = *this;
		++(*this);
		return iterator;
	}

	Iterator& operator--()
	{
		--ptr;
		return *this;
	}

	Iterator operator--(int)
	{
		Iterator iterator = *this;
		--(*this);
		return iterator;
	}

	PointerType operator->()
	{
		return ptr;
	}

	ReferenceType operator*()
	{
		return *ptr;
	}

	bool operator==(const Iterator& other) const
	{
		return ptr == other.ptr();
	}

	bool operator!=(const Iterator& other) const
	{
		return !(*this == other);
	}

private:
	PointerType ptr = nullptr;
};

template<typename Item>
class Bag
{
public:
	using ValueType = Item;
	using Iterator = Iterator<Bag<Item>>;
public:
	Bag();
	void Add(const Item& item);
	bool IsEmpty();
	size_t Size();

	Iterator begin()
	{
		return Iterator(data);
	}

	Iterator end()
	{
		Iterator(data + size);
	}

private:
	Item* data = nullptr;
	size_t size = 0;
};

