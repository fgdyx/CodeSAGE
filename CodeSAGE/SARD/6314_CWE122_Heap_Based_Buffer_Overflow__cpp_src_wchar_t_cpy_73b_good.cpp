#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 wchar_t VAR5[50] = VAR6"";
 wcscpy(VAR5, VAR4);
 FUN3(VAR4);
 delete [] VAR4;
 }
}
#endif
