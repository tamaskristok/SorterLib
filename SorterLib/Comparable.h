#pragma once



class Comparable {
public:
	virtual bool operator<(const Comparable& other) const = 0;
	virtual bool operator==(const Comparable& other) const = 0;
};