#include "Sorter.h"

void SorterLibNS::Sorter::bubbleSort(Comparable** pItems, unsigned itemCount)
{
        for (int i = 0; i < itemCount - 1; i++) {
            for (int j = 0; j < itemCount - i - 1; j++) {
                if (&pItems[j] > &pItems[j + 1]) {
                    Comparable* tmp;
                    tmp = pItems[j];
                    pItems[j] = pItems[j + 1];
                    pItems[j + 1] = tmp;
                    delete tmp;
                }
            }
        }

}
