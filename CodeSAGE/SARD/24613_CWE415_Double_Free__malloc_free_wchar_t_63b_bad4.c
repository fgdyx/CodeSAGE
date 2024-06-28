#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
}
#endif
