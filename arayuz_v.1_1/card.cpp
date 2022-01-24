#include "card.h"

Card::Card()
{

}

Card::Card(QString card_type, QString card_name, int card_point, QString card_path){
    this->m_card_type = card_type;
    this->m_card_name = card_name;
    this->m_card_point = card_point;
    this->m_card_path = card_path;
}
