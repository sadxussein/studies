documents = [
        {"type": "passport", "number": "2207 876234", "name": "Василий Гупкин"},
        {"type": "invoice", "number": "11-2", "name": "Геннадий Покемонов"},
        {"type": "insurance", "number": "10006", "name": "Аристарх Павлов"}
]

directories = {
        '1': ['2207 876234', '11-2'],
        '2': ['10006'],
        '3': []
}

def get_user(documents):
    document_id = input("Введите номер документа ")
    for document in documents:
        if document["number"] == document_id:
            print("Документ приналежит человеку по имени", document["name"])
    
def get_shelf_id(directories):
    document_id = input("Введите номер документа: ")
    for directory_id, directory in directories.items():
        if document_id in directory: return "Документ находится на полке номер " + directory_id
    return "Такого документа не существует!"

def list_documents(documents, directories):
    for document in documents:
        for key, directory in directories.items():
            if document["number"] in directory:
                print(key, end=' ')
        for value in document.values():
            print(value, end=' ')
        print('')

def add_document(documents, directories):
    new_document = {"type": "", "number": "", "name": ""}
    new_document["type"] = input("Тип документа: ")
    new_document["number"] = input("Номер документа: ")
    new_document["name"] = input("Имя владельца документа: ")
    directory_id = input("Введите номер полки: ")
    if directory_id in directories.keys():
        documents.append(new_document)
        directories[directory_id].append(new_document["number"])
        return "Документ добавлен."
    else:
        return "Такой полки не существует!" 
    
def delete_document(documents, directories):
    document_id = input("Введите номер документа: ")
    doc_exists_in_dirs, doc_exists_in_docs = False, False
    for document in documents:
        if not doc_exists_in_docs:
            if document_id in document.values():
                doc_exists_in_docs = True
                document_to_remove = document            
    for key, directory in directories.items():
        if not doc_exists_in_dirs:
            if document_id in directory:
                doc_exists_in_dirs = True
                directory_to_remove = key        
    if doc_exists_in_dirs and doc_exists_in_docs:
        documents.remove(document_to_remove)
        directories[directory_to_remove].remove(document_id)
        return "Документ удален."
    else:
        return "Такого документа не существует!"
        
def move_document(directories):
    target_document = input("Введите номер документа: ")
    target_directory = input("Введите номер целевой папки: ")
    doc_exists_in_dirs, dir_exits = False, False
    if target_directory in directories.keys(): dir_exits = True
    else: return "Такой директории не существует!"
    for key, directory in directories.items():
        if not doc_exists_in_dirs:
            if target_document in directory:
                doc_exists_in_dirs = True
                directory_to_remove = key
    if doc_exists_in_dirs and dir_exits:
        directories[directory_to_remove].remove(target_document)
        directories[target_directory].append(target_document)
        return "Документ перемещен из полки номер " + directory_to_remove + " на полку номер " + target_directory
    else:
        return "Такого документа не существует!"

def add_directory(directories):
    new_directory = input("Введите ID новой директории: ")
    if new_directory in directories.keys():
        return "Такая полка уже существует!"
    else:
        directories[new_directory] = []
        return "Полка с ID " + new_directory + " добавлена"

user_command = None

while (user_command != 'e'):
    user_command = input("Введите команду (? для вывода руководства) ") 
    
    if (user_command == '?'):   # manual
        print("p - определение владельца документа по его ID")
        print("s - определение номера полки, где лежит документ")
        print("l - вывод списка всех документов")
        print("a - добавление документа")
        print("d - удаление документа")
        print("m - перемещение документа")
        print("as - добавление полки")
    elif (user_command == 'p'): # get user by document ID
        get_user(documents)
    elif (user_command == 's'): # get directory by document ID
        print(get_shelf_id(directories))
    elif (user_command == 'l'): # list all documents
        list_documents(documents, directories)
    elif (user_command == 'a'): # add a document
        print(add_document(documents, directories))
    elif (user_command == 'd'): # remove a document
        print(delete_document(documents, directories))
    elif (user_command == 'm'): # move document to a directory
        print(move_document(directories))
    elif (user_command == 'as'): # add a directory
        print(add_directory(directories))
    elif (user_command == 'e'): # exit program
        print("До свидания.")
    else:   # command error
        print("Команда введена неверно.")
        
