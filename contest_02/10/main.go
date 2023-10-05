// Функция shift сдвигает элементы среза data на указанное количество шагов steps.
func shift(data []int, steps int) {
    length := len(data)

    // Если срез пустой, просто завершаем выполнение функции
    if length == 0 {
        return
    }

    // Обработка больших значений steps
    steps = steps % length

    // Если steps отрицательный, преобразуем его в положительный эквивалент
    if steps < 0 {
        steps += length
    }

    // Создаем новый срез для хранения сдвинутых данных
    new_data := make([]int, length)

    // Перебираем элементы исходного среза
    for idx, val := range data {
        // Вычисляем новый индекс для текущего элемента
        new_idx := (idx + steps) % length

        // Сохраняем элемент в новом срезе по вычисленному индексу
        new_data[new_idx] = val
    }

    // Копируем сдвинутые данные обратно в исходный срез data
    copy(data, new_data)
}
