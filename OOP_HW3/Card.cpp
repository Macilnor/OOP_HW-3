#include "Card.h"

Card::Card(Suit suite, Rank rank) : m_Suit(suite), m_Rank(rank), m_faceUp(false)
{
}

void Card::Flip()
{
	if (m_faceUp)
		m_faceUp = false;
	else
		m_faceUp = true;
}

int Card::getValue() const
{
	if (m_faceUp)
		return m_Rank;
	else
		return 0;
}
