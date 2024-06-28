#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[10+1] = VAR5;
 wcscpy(VAR2, VAR4);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
