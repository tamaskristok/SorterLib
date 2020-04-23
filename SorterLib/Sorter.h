#pragma once
#include "Comparable.h"

namespace SorterLibNS {

class Sorter
{
public:
		void bubbleSort(Comparable** pItems, unsigned itemCount);
		void selectionSort(Comparable** pItems, unsigned itemCount);
		void bubbleSort(Comparable** pItems, unsigned itemCount);
		void insertionSort(Comparable** pItems, unsigned itemCount);
		void insertionSortRecursive(Comparable** pItems, unsigned itemCount);
		void merge(Comparable** pItems, int l, int m, int r);
		void mergeSort(Comparable** pItems, int l, int r);
		void quickSort(Comparable** pItems, int low, int high);
		void heapSort(Comparable** pItems, int n);
		void countSort(Comparable** pItems);
		void radixsort(Comparable** pItems, int n);
		void bucketSort(Comparable** pItems, int n);
		int shellSort(Comparable** pItems, int n);
		void timSort(Comparable** pItems, int n);
	
};

}