#include "invalidIndex.h"

InvalidIndex::InvalidIndex(int index)
: index_(index)
{

}

int InvalidIndex::invalid() const
{
	return this->index_;
}
