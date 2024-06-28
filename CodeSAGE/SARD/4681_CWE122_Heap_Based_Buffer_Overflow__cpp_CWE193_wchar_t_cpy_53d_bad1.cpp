#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcscpy(VAR2, VAR3);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
