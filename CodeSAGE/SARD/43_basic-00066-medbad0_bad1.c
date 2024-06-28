int main(int argc, char *argv[])
{
 char VAR1[10];
 if (sizeof VAR1 > 17 + 1)
 {
 return 0;
 }
 /* BAD */
 VAR1[17] = '';
 return 0;
}
