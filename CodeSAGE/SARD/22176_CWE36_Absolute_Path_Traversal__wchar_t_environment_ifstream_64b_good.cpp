#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 ifstream VAR5;
 VAR5.open((char *)VAR4);
 VAR5.close();
 }
}
#endif
