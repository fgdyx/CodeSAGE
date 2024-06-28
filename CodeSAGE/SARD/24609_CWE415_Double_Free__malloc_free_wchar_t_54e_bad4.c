#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
#endif
