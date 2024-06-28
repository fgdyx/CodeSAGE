#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[10+1] = VAR5;
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
