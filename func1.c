//=============================================
void delay_ms(unsigned int dat)
{
        unsigned int i;
        for (i = 0; i < dat; i++)
        {
                __delay_ms(1);
        }
}
//===============================================
