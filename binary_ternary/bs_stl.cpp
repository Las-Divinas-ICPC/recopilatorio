// Primer not < (primer elemento o mayor)
Iterator lower_bound(Iterator first, Iterator last, Find x);
// Primer > (elemento siguente del ultimo)
Iterator upper_bound(Iterator first, Iterator last, Find x);
// @end si no se encontro en ambos casos
bool binary_search(Iterator first, Iterator last, Find x);
