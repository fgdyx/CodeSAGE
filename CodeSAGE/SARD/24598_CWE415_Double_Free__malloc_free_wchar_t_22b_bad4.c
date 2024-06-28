#ifndef VAR1
extern int VAR2;
void FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
 }
}
#endif
