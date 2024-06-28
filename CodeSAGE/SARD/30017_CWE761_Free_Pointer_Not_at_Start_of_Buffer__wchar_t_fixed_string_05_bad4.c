#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 wcscpy(VAR2, VAR4);
 if(VAR5)
 {
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR3''; VAR2++)
 {
 if (*VAR2 == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
